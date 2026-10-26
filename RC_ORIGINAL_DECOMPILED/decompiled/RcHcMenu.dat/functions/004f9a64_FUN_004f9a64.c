/*
 * FUN_004f9a64 at 004f9a64
 * undefined __register FUN_004f9a64(int * param_1)
 * Address ranges: 004f9a64-004f9b09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9a64(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  if (param_1[0x89] != 0) {
    local_8 = param_1;
    FUN_00494e38((int *)param_1[0x89],(byte *)(param_1 + 0x82),'\0',&local_10,&local_c);
    uVar1 = FUN_0040320c(local_c,(int)&PTR_FUN_00489774);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(local_c,(int)&PTR_FUN_004f8e6c);
      if ((char)uVar1 == '\0') {
        FUN_00429558(local_8,local_c[1]);
      }
      else {
        iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_004f8e6c);
        FUN_00429558(local_8,*(int *)(iVar2 + 0x30));
      }
    }
    else {
      iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_00489774);
      FUN_00429558(local_8,*(int *)(iVar2 + 0x30));
    }
  }
  return;
}

