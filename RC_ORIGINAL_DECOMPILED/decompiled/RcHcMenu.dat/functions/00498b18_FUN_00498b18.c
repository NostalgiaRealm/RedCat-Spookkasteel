/*
 * FUN_00498b18 at 00498b18
 * undefined __register FUN_00498b18(uint param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 00498b18-00498b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00498b18(uint param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00498acc(param_3);
  iVar2 = FUN_00498acc(param_2);
  iVar3 = FUN_00498acc(param_1);
  FUN_004989fc(iVar3,iVar2,iVar1,param_4);
  return;
}

