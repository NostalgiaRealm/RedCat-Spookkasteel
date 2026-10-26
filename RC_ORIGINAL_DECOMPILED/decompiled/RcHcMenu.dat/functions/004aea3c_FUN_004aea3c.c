/*
 * FUN_004aea3c at 004aea3c
 * int * __register FUN_004aea3c(int param_1)
 * Address ranges: 004aea3c-004aeaed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004aea3c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_c;
  
  piVar1 = FUN_004ad89c(*(int *)(param_1 + 0x174),*(byte *)(param_1 + 0x17a));
  local_c = (int *)0x0;
  uVar2 = FUN_0040320c(piVar1,(int)&LAB_0049893c);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0049f730);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_00403224(piVar1,(int)&PTR_FUN_0049f730);
      local_c = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*local_c + 0x3c))(local_c,(char)piVar1[0x13]);
      FUN_0049b9c0(local_c,(char)piVar1[0x15]);
      FUN_0049b988(local_c,piVar1[0x14]);
    }
  }
  else {
    local_c = (int *)FUN_00403224(piVar1,(int)&LAB_0049893c);
  }
  return local_c;
}

