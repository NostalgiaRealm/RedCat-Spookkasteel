/*
 * FUN_004583a0 at 004583a0
 * undefined __register FUN_004583a0(int param_1, int param_2, char * param_3, int * param_4)
 * Address ranges: 004583a0-0045841c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004583a0(int param_1,int param_2,char *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  FUN_00403db0(param_4);
  cVar1 = FUN_00458304(param_1,param_2,param_3,&local_8);
  iVar5 = local_8;
  if (cVar1 != '\0') {
    while ((iVar2 = FUN_00404030(param_2), iVar5 <= iVar2 &&
           (uVar3 = FUN_00458254(param_3,*(char *)(param_2 + -1 + iVar5)), (char)uVar3 == '\0'))) {
      iVar5 = iVar5 + 1;
    }
    FUN_00404364(param_4,iVar5 - local_8);
    puVar4 = (undefined4 *)FUN_00404200(param_4);
    FUN_00402944((undefined4 *)(param_2 + -1 + local_8),puVar4,iVar5 - local_8);
  }
  return;
}

