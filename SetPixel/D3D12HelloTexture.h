//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "DXSample.h"

using namespace DirectX;
using namespace Microsoft::WRL;

class D3D12HelloTexture : public DXSample
{
public:
	D3D12HelloTexture(UINT width, UINT height, std::wstring name);

    void SetPixel(UINT x, UINT y, UINT8 r, UINT8 g, UINT8 b);
    void Clear(UINT8 r, UINT8 g, UINT8 b);

protected:
	virtual void OnInit();
	virtual void OnUpdate();
	virtual void OnRender();
	virtual void OnDestroy();
	virtual bool OnEvent(MSG msg);

private:
	static const UINT FrameCount = 2;
	static const UINT TextureWidth = 320;
	static const UINT TextureHeight = 180;
	static const UINT TexturePixelSize = 4;	// The number of bytes used to represent a pixel in the texture.

	struct Vertex
	{
		XMFLOAT3 position;
		XMFLOAT2 uv;
	};

	// Pipeline objects.
	D3D12_VIEWPORT m_viewport;
	D3D12_RECT m_scissorRect;
	ComPtr<IDXGISwapChain3> m_swapChain;
	ComPtr<ID3D12Device> m_device;
	ComPtr<ID3D12Resource> m_renderTargets[FrameCount];
	ComPtr<ID3D12CommandAllocator> m_commandAllocator;
	ComPtr<ID3D12CommandQueue> m_commandQueue;
	ComPtr<ID3D12RootSignature> m_rootSignature;
	ComPtr<ID3D12DescriptorHeap> m_rtvHeap;
	ComPtr<ID3D12DescriptorHeap> m_srvHeap;
	ComPtr<ID3D12PipelineState> m_pipelineState;
	ComPtr<ID3D12GraphicsCommandList> m_commandList;
    ComPtr<ID3D12Resource> m_textureUploadHeap;
    UINT m_rtvDescriptorSize;

	// App resources.
	ComPtr<ID3D12Resource> m_vertexBuffer;
	D3D12_VERTEX_BUFFER_VIEW m_vertexBufferView;
	ComPtr<ID3D12Resource> m_texture;

	// Synchronization objects.
	UINT m_frameIndex;
	HANDLE m_fenceEvent;
	ComPtr<ID3D12Fence> m_fence;
	UINT64 m_fenceValue;

    // Pixels
    std::vector<UINT8> m_pixels;

	void LoadPipeline();
	void LoadAssets();
	void GenerateTextureData();
	void PopulateCommandList();
	void WaitForPreviousFrame();
};
