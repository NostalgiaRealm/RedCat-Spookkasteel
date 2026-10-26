/*
 * FUN_004e98b8 at 004e98b8
 * undefined4 __register FUN_004e98b8(int * param_1, int * param_2)
 * Address ranges: 004e98b8-004e991b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e98b8(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 local_10;
  
  piVar4 = (int *)FUN_00403224(param_2,(int)&LAB_004e9250);
  bVar1 = (**(code **)(*piVar4 + 0x6c))();
  cVar2 = (**(code **)(*param_1 + 0x6c))();
  if ((cVar2 == '\0') || (bVar1 != 0)) {
    bVar3 = (**(code **)(*param_1 + 0x6c))();
    if (((bVar3 ^ 1) & bVar1) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0xffffffff;
    }
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

