/*
 * FUN_00482928 at 00482928
 * int * __register FUN_00482928(char * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00482928-00482a08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00482928(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  PCNZCH pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_c;
  
  if (*(int *)(*(int *)(param_4 + -4) + 0x80) == 0) {
    uVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    *(undefined4 *)(*(int *)(param_4 + -4) + 0x80) = uVar1;
  }
  local_c = (int *)0x0;
  iVar2 = FUN_004828bc(param_1);
  iVar6 = *(int *)(*(int *)(*(int *)(param_4 + -4) + 0x80) + 8);
  piVar3 = local_c;
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      piVar3 = (int *)FUN_00412384(*(undefined4 **)(*(int *)(param_4 + -4) + 0x80),iVar7);
      if (*piVar3 == iVar2) {
        pCVar4 = FUN_004041f4((undefined *)piVar3[2]);
        iVar5 = FUN_004098e4(pCVar4,param_1);
        if (iVar5 == 0) break;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
      piVar3 = local_c;
    } while (iVar6 != 0);
  }
  local_c = piVar3;
  if (local_c == (int *)0x0) {
    local_c = FUN_00404c74(0xc,"\x0e\tTStmtInfo\f");
    FUN_004121d8(*(int **)(*(int *)(param_4 + -4) + 0x80),(int)local_c);
    FUN_00402cfc(local_c,0xc,0);
    *local_c = iVar2;
  }
  return local_c;
}

