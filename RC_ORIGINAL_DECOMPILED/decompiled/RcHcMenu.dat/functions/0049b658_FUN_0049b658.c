/*
 * FUN_0049b658 at 0049b658
 * undefined __register FUN_0049b658(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0049b658-0049b6bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b658(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((int)param_2 < 1) {
    FUN_0049aa40(param_1,param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 == '\0') {
      FUN_0049b884(param_1,param_2,param_1[0x10],(undefined *)param_1[0xf]);
    }
    else {
      puVar3 = (undefined *)0x8;
      iVar2 = FUN_004989d0(param_1[0x10],1);
      FUN_0049b884(param_1,param_2,iVar2,puVar3);
    }
  }
  return;
}

