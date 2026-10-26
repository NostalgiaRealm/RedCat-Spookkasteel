/*
 * FUN_00450cc8 at 00450cc8
 * undefined __register FUN_00450cc8(int param_1)
 * Address ranges: 00450cc8-00450ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00450cc8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00422980(*(int *)(param_1 + 0x88));
  if (iVar1 == 0) {
    LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  }
  return;
}

