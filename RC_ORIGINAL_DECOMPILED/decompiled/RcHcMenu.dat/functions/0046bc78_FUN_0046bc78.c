/*
 * FUN_0046bc78 at 0046bc78
 * undefined __register FUN_0046bc78(int param_1, uint * param_2)
 * Address ranges: 0046bc78-0046bcf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046bc78(int param_1,uint *param_2)

{
  int iVar1;
  undefined1 in_ZF;
  
  FUN_00404140(*(uint **)(param_1 + 0xd0),param_2);
  if (!(bool)in_ZF) {
    FUN_00403e04((int *)(param_1 + 0xd0),param_2);
    if (param_2 == (uint *)0x0) {
      FUN_0046bad4(param_1);
    }
    else {
      iVar1 = FUN_0040431c(";",(char *)param_2);
      if (iVar1 == 0) {
        iVar1 = 0x100;
      }
      FUN_00404238((int)param_2,iVar1 + 1,0xff,(int *)(param_1 + 0xd4));
      FUN_00404238((int)param_2,1,iVar1 - 1,(int *)(param_1 + 0xd8));
    }
    FUN_004695c4(param_1,1);
  }
  return;
}

