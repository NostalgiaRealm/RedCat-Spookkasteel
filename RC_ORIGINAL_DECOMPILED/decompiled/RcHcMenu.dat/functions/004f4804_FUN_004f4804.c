/*
 * FUN_004f4804 at 004f4804
 * undefined __register FUN_004f4804(int param_1, WPARAM param_2, int * param_3)
 * Address ranges: 004f4804-004f48eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 3 for TTabStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 3 for
   TTabStrings. Original bytes unchanged; names and types still inferred. */

void FUN_004f4804(int param_1,WPARAM param_2,int *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_1048;
  undefined1 *puStack_1044;
  undefined1 *puStack_1040;
  WPARAM local_1030;
  undefined1 local_102c;
  byte *local_1028;
  undefined4 *local_1024;
  char local_1020 [28];
  int iStack_1004;
  uint local_20 [3];
  char *local_14;
  undefined4 local_10;
  
  puStack_1040 = &stack0xfffffffc;
  local_1024 = (undefined4 *)0x0;
  local_1028 = (byte *)0x0;
  puStack_1044 = &LAB_004f48ec;
  uStack_1048 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1048;
  iStack_1004 = param_1;
  uVar1 = FUN_00432d3c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_00571d60 + (uVar1 & 0x7f) * 4) | 1;
  local_14 = local_1020;
  local_10 = 0x1000;
  lParam = local_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 == 0) {
    ppuVar3 = &local_1024;
    FUN_00406a48((undefined4 *)PTR_PTR_0057234c,(int *)&local_1028);
    local_102c = 0;
    local_1030 = param_2;
    FUN_0040a894(local_1028,&local_1030,0,(int *)ppuVar3);
    FUN_004f46e0(local_1024);
  }
  FUN_00403fe0(param_3,local_1020,0x1000);
  *in_FS_OFFSET = uStack_1048;
  puStack_1040 = &LAB_004f48f3;
  puStack_1044 = (undefined1 *)0x4f48eb;
  FUN_00403dd4((int *)&local_1028,2);
  return;
}

