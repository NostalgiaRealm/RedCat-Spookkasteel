/*
 * FUN_004356e4 at 004356e4
 * undefined __register FUN_004356e4(int * param_1, int * param_2)
 * Address ranges: 004356e4-0043575e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004356e4(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00433700((int)param_1,0xb036,param_2,0);
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      FUN_00432b50((int)param_2,*(char *)((int)param_2 + 0x47),'\0');
    }
  }
  else {
    FUN_0043555c(param_2,'\x01');
    FUN_00435d9c(param_2);
  }
  FUN_004355c8((int)param_1,param_2);
  FUN_00433700((int)param_1,0xb02c,param_2,0);
  FUN_0043532c(param_1);
  return;
}

