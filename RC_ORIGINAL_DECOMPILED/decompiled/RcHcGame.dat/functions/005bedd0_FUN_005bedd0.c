/*
 * FUN_005bedd0 at 005bedd0
 * undefined FUN_005bedd0(void)
 * Address ranges: 005bedd0-005bf098
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005bedd0(LPCSTR param_1,byte param_2,byte param_3)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  undefined4 *pvBuffer;
  HFONT h;
  HWND pHVar5;
  HDC hdc;
  HGDIOBJ h_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 extraout_var;
  int *piVar9;
  int local_2c;
  MAT2 local_24;
  _GLYPHMETRICS local_14;
  
  local_24.eM11.fract = 0;
  local_24.eM11.value = 1;
  local_24.eM12.fract = 0;
  local_24.eM12.value = 0;
  local_24.eM21.fract = 0;
  local_24.eM21.value = 0;
  local_24.eM22.fract = 0;
  local_24.eM22.value = 1;
  pvBuffer = (undefined4 *)FUN_005cf3b0(0x8000);
  puVar6 = pvBuffer;
  for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0xeeeeeeee;
    puVar6 = puVar6 + 1;
  }
  if (param_2 <= param_3) {
    local_2c = ((uint)param_3 - (uint)param_2) + 1;
    _param_3 = (uint)param_2;
    do {
      iVar8 = *(int *)(param_1 + 0x2050);
      bVar2 = false;
      h = CreateFontA(-(int)*(short *)(param_1 + 0x40),0,0,0,(int)*(short *)(param_1 + 0x42),0,0,0,0
                      ,7,0,0,0,param_1);
      pHVar5 = GetDesktopWindow();
      hdc = GetDC(pHVar5);
      h_00 = SelectObject(hdc,h);
      GetGlyphOutlineA(hdc,_param_3,(-(uint)(iVar8 != 0) & 5) + 1,&local_14,0x8000,pvBuffer,
                       &local_24);
      SelectObject(hdc,h_00);
      pHVar5 = GetDesktopWindow();
      ReleaseDC(pHVar5,hdc);
      DeleteObject(h);
      piVar9 = *(int **)(param_1 + 0x44);
      if (piVar9 == (int *)0x0) {
LAB_005befa1:
        puVar6 = (undefined4 *)FUN_005cf3b0(0xc);
        *puVar6 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 **)(param_1 + 0x44) = puVar6;
        *(undefined2 *)(puVar6 + 2) = 0;
        *(undefined2 *)((int)puVar6 + 10) = 0;
        uVar7 = FUN_005c01d0(1,1);
        puVar6[1] = uVar7;
        FUN_005c4aa0();
        iVar8 = 0;
        do {
          FUN_005c50f0(iVar8,iVar8,iVar8,iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x100);
        FUN_005c3fa0();
        FUN_005c3cf0(0,0);
        FUN_005c4d10();
        FUN_005bb870(*(undefined4 *)(param_1 + 0x2048),puVar6[1]);
        FUN_005bea00(*(undefined2 *)(puVar6 + 2),
                     CONCAT22(extraout_var,*(undefined2 *)((int)puVar6 + 10)),param_1,puVar6,
                     _param_3,pvBuffer,0x8000);
        *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) + (short)local_14.gmBlackBoxX;
      }
      else {
        do {
          sVar3 = FUN_0059b220();
          sVar4 = FUN_0059b230();
          if ((int)local_14.gmBlackBoxY <= ((int)sVar4 - (int)*(short *)((int)piVar9 + 10)) + -1) {
            if (((int)sVar3 - (int)(short)piVar9[2]) + -1 < (int)local_14.gmCellIncX) {
              sVar1 = *(short *)(param_1 + 0x40);
              *(undefined2 *)(piVar9 + 2) = 0;
              *(short *)((int)piVar9 + 10) = *(short *)((int)piVar9 + 10) + sVar1;
              if ((((int)sVar4 - (int)*(short *)((int)piVar9 + 10)) + -1 < (int)local_14.gmBlackBoxY
                  ) || (sVar3 + -1 < (int)local_14.gmCellIncX)) goto LAB_005bef8d;
            }
            FUN_005bea00((short)piVar9[2],
                         CONCAT22(local_14.gmCellIncX >> 0xf,*(undefined2 *)((int)piVar9 + 10)),
                         param_1,piVar9,_param_3,pvBuffer,0x8000);
            *(short *)(piVar9 + 2) = (short)piVar9[2] + (short)local_14.gmBlackBoxX;
            bVar2 = true;
          }
LAB_005bef8d:
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
        if (!bVar2) goto LAB_005befa1;
      }
      _param_3 = _param_3 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_005cf400(pvBuffer);
  _DAT_007203c0 = 0;
  return 1;
}

