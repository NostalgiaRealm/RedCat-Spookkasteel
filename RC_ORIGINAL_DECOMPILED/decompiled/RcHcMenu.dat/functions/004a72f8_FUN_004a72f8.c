/*
 * FUN_004a72f8 at 004a72f8
 * int * __register FUN_004a72f8(int * param_1)
 * Address ranges: 004a72f8-004a73d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a72f8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *local_c;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  local_c = (int *)0x0;
  uVar2 = FUN_0040320c(piVar1,(int)&LAB_0049893c);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0049f730);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_00403224(piVar1,(int)&PTR_FUN_0049f730);
      local_c = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*local_c + 0x3c))(local_c,(char)param_1[0x4d]);
      FUN_0049b9c0(local_c,*(char *)((int)param_1 + 0x135));
      FUN_0049b988(local_c,param_1[0x4e]);
    }
  }
  else {
    local_c = (int *)FUN_00403224(piVar1,(int)&LAB_0049893c);
    (**(code **)(*local_c + 0x3c))(local_c,(char)param_1[0x4d]);
    FUN_0049b9c0(local_c,*(char *)((int)param_1 + 0x135));
    FUN_0049b988(local_c,param_1[0x4e]);
  }
  return local_c;
}

