/*
 * FUN_00448bc4 at 00448bc4
 * int __register FUN_00448bc4(int param_1)
 * Address ranges: 00448bc4-00448c42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00448bc4(int param_1)

{
  HWND hWnd;
  int iVar1;
  int extraout_ECX;
  undefined2 extraout_var;
  int iVar2;
  
  iVar2 = -0x10;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 4));
  GetWindowLongA(hWnd,iVar2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = FUN_00448b48(0,CONCAT22(extraout_var,0x15),extraout_ECX,(int)&stack0xfffffffc);
    iVar2 = FUN_004321bc(*(int **)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = FUN_00448b48(1,CONCAT22(extraout_var,0x14),extraout_ECX,(int)&stack0xfffffffc);
    iVar2 = FUN_00432178(*(int **)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

