/*
 * FUN_004a999c at 004a999c
 * undefined __register FUN_004a999c(int param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004a999c-004a99ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a999c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  LPCVOID pvVar2;
  
  if (param_3 == (int *)0x0) {
    pvVar2 = (LPCVOID)FUN_0040cc5c();
    FUN_0040ce08((int *)0x0,pvVar2);
  }
  else {
    uVar1 = FUN_0040320c(param_3,(int)&DAT_00408b2c);
    if ((char)uVar1 == '\0') {
      if (*(short *)(param_1 + 0x3a) == 0) {
        FUN_0045163c(*(int *)PTR_DAT_005723fc,(int)param_3);
      }
      else {
        (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2,param_3);
      }
    }
  }
  return;
}

