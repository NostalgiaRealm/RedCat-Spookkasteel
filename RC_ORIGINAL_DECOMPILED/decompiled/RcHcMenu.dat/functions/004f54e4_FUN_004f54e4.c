/*
 * FUN_004f54e4 at 004f54e4
 * undefined __register FUN_004f54e4(int * param_1)
 * Address ranges: 004f54e4-004f55ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f54e4(int *param_1)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  WPARAM WVar3;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  byte *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  undefined4 *local_28;
  undefined4 local_24 [5];
  undefined4 local_10;
  int local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_3c = 0;
  local_40 = (byte *)0x0;
  puStack_54 = &LAB_004f55cf;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_24[0] = 2;
  iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
  if (-1 < iVar1 + -1) {
    WVar3 = 0;
    local_8 = iVar1;
    do {
      local_10 = (**(code **)(*param_1 + 0xbc))(param_1,WVar3);
      puVar4 = local_24;
      Msg = 0x1306;
      wParam = WVar3;
      hWnd = (HWND)FUN_00438988(param_1);
      LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)puVar4);
      if (LVar2 == 0) {
        ppuVar5 = &local_28;
        (**(code **)(*(int *)param_1[0x84] + 0xc))((int *)param_1[0x84],WVar3,&local_3c);
        local_38 = local_3c;
        local_34 = 0xb;
        local_2c = 0;
        puVar4 = &local_38;
        local_30 = WVar3;
        FUN_00406a48((undefined4 *)PTR_PTR_005724c4,(int *)&local_40);
        FUN_0040a894(local_40,puVar4,1,(int *)ppuVar5);
        FUN_004f46e0(local_28);
      }
      WVar3 = WVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  FUN_004f547c(param_1);
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_004f55d6;
  puStack_54 = (undefined1 *)0x4f55c6;
  FUN_00403dd4((int *)&local_40,2);
  puStack_54 = (undefined1 *)0x4f55ce;
  FUN_00403db0((int *)&local_28);
  return;
}

