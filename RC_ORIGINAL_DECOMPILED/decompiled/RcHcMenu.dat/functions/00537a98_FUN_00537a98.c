/*
 * FUN_00537a98 at 00537a98
 * undefined __register FUN_00537a98(int * param_1)
 * Address ranges: 00537a98-00537af2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537a98(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int in_stack_00000008;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00537750(param_1);
  if (*(char *)(iVar1 + 0x2d8) == '\x03') {
    FUN_00537af4(local_8,in_stack_00000008,&local_c);
    if (local_c != 0) {
      uVar3 = FUN_0051c7f0(local_c);
      FUN_00537904(local_8,uVar3);
    }
  }
  else {
    piVar2 = (int *)FUN_00537750(local_8);
    FUN_0053afc0(piVar2);
  }
  return;
}

