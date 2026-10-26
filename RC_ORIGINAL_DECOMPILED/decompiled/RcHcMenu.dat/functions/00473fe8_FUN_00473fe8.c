/*
 * FUN_00473fe8 at 00473fe8
 * undefined __register FUN_00473fe8(undefined4 param_1, int param_2, int param_3)
 * Address ranges: 00473fe8-00474008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473fe8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0xc);
  }
  FUN_00466cb0((int *)&DAT_00461b04,'\x01',*(undefined4 **)(param_2 + 4),param_2,iVar1,1,
               (undefined4 *)0x0);
  return;
}

