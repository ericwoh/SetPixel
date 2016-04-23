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

#include "stdafx.h"
#include "D3D12HelloTexture.h"

void DrawString(D3D12HelloTexture* d3d, UINT x, UINT y, std::wstring str, UINT8 r, UINT8 g, UINT8 b)
{
    for (int i = 0; i < str.length(); ++i) {
        switch (str[i]) {
        case '0':
            d3d->SetPixel(x + 1, y + 0, r, g, b);

            d3d->SetPixel(x + 0, y + 1, r, g, b);
            d3d->SetPixel(x + 2, y + 1, r, g, b);
            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 2, y + 2, r, g, b);
            d3d->SetPixel(x + 0, y + 3, r, g, b);
            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 1, y + 4, r, g, b);
            break;
        case '1':
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 1, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 3, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);
            break;
        case '2':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);

            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 1, y + 2, r, g, b);

            d3d->SetPixel(x + 0, y + 1, r, g, b);

            d3d->SetPixel(x + 0, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            d3d->SetPixel(x + 2, y + 0, r, g, b);
            break;
        case '3':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);

            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 1, y + 2, r, g, b);

            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 0, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            break;
        case '4':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 2, y + 4, r, g, b);

            d3d->SetPixel(x + 0, y + 3, r, g, b);
            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);
            d3d->SetPixel(x + 2, y + 2, r, g, b);

            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 2, y + 0, r, g, b);
            break;
        case '5':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);
            d3d->SetPixel(x + 2, y + 4, r, g, b);

            d3d->SetPixel(x + 0, y + 3, r, g, b);

            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);

            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 0, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            break;
        case '6':
            d3d->SetPixel(x + 0, y + 4, r, g, b);

            d3d->SetPixel(x + 0, y + 3, r, g, b);

            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);
            d3d->SetPixel(x + 2, y + 2, r, g, b);

            d3d->SetPixel(x + 0, y + 1, r, g, b);
            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 0, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            d3d->SetPixel(x + 2, y + 0, r, g, b);
            break;
        case '7':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);
            d3d->SetPixel(x + 2, y + 4, r, g, b);

            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 1, y + 2, r, g, b);

            d3d->SetPixel(x + 1, y + 1, r, g, b);

            d3d->SetPixel(x + 1, y + 0, r, g, b);
            break;
        case '8':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);
            d3d->SetPixel(x + 2, y + 4, r, g, b);

            d3d->SetPixel(x + 0, y + 3, r, g, b);
            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);
            d3d->SetPixel(x + 2, y + 2, r, g, b);

            d3d->SetPixel(x + 0, y + 1, r, g, b);
            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 0, y + 0, r, g, b);
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            d3d->SetPixel(x + 2, y + 0, r, g, b);
            break;
        case '9':
            d3d->SetPixel(x + 0, y + 4, r, g, b);
            d3d->SetPixel(x + 1, y + 4, r, g, b);
            d3d->SetPixel(x + 2, y + 4, r, g, b);

            d3d->SetPixel(x + 0, y + 3, r, g, b);
            d3d->SetPixel(x + 2, y + 3, r, g, b);

            d3d->SetPixel(x + 0, y + 2, r, g, b);
            d3d->SetPixel(x + 1, y + 2, r, g, b);
            d3d->SetPixel(x + 2, y + 2, r, g, b);

            d3d->SetPixel(x + 2, y + 1, r, g, b);

            d3d->SetPixel(x + 2, y + 0, r, g, b);
            break;
        case '.':
            d3d->SetPixel(x + 1, y + 0, r, g, b);
            break;
        default:
            break;
        }

        x += 4;
    }
}

void
Update(D3D12HelloTexture* d3d, float dt)
{
    // Clear our screen
    d3d->Clear(100, 100, 255);

    // Take the durection of the last turn (in seconds), and invert it to find
    // our frames per second, then build a string that contains that value.
    wchar_t FPS[16];
    swprintf_s(FPS, L"%7.2f", 1.f / dt);

    // Call out custom DrawString function to display the FPS in the upper 
    // right corner.
    DrawString(d3d, 293, 175, FPS, 0, 0, 0);
}

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    D3D12HelloTexture sample(1280, 720, L"SetPixel");
    return sample.Run(hInstance, nCmdShow);
}
