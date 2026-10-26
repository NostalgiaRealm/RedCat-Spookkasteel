/*
 * FUN_004f4b38 at 004f4b38
 * undefined __register FUN_004f4b38(int param_1, WPARAM param_2, undefined * param_3)
 * Address ranges: 004f4b38-004f4c09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 21 for TTabStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 21 for
   TTabStrings. Original bytes unchanged; names and types still inferred. */

void FUN_004f4b38(int param_1,WPARAM param_2,undefined *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined *local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  uint local_20 [3];
  undefined *local_14;
  undefined4 local_c;
  
  puStack_48 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_4c = &LAB_004f4c0a;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar1 = FUN_00432d3c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_00571d70 + (uVar1 & 0x7f) * 4) | 3;
  local_14 = FUN_004041f4(param_3);
  local_c = (**(code **)(**(int **)(param_1 + 0xc) + 0xbc))(*(int **)(param_1 + 0xc),param_2);
  lParam = local_20;
  Msg = 0x1307;
  wParam = param_2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 < 0) {
    ppuVar3 = &local_24;
    FUN_00406a48((undefined4 *)PTR_PTR_005724c4,(int *)&local_28);
    local_34 = 0xb;
    local_2c = 0;
    local_38 = param_3;
    local_30 = param_2;
    FUN_0040a894(local_28,&local_38,1,(int *)ppuVar3);
    FUN_004f46e0(local_24);
  }
  FUN_004f547c(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004f4c11;
  puStack_4c = (undefined1 *)0x4f4c09;
  FUN_00403dd4((int *)&local_28,2);
  return;
}

