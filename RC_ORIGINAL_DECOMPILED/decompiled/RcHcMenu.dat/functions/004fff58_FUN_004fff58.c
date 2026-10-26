/*
 * FUN_004fff58 at 004fff58
 * undefined __register FUN_004fff58(int * param_1, int * param_2)
 * Address ranges: 004fff58-004fffdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fff58(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_004f1924((undefined4 *)param_1[0x88],(int)param_2);
  if ((param_2 != (int *)0x0) &&
     (uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004897ec), (char)uVar1 != '\0')) {
    piVar2 = (int *)FUN_00496d84((int)param_2);
    iVar3 = FUN_00403224(piVar2,(int)&PTR_FUN_00489774);
    FUN_00429558(param_1,*(int *)(iVar3 + 0x30));
    iVar3 = FUN_00496d84((int)param_2);
    FUN_004fec0c(param_1,(*(byte *)(iVar3 + 0x18) & 0x20) != 0);
    return;
  }
  FUN_00429558(param_1,0);
  FUN_004fec0c(param_1,'\0');
  return;
}

