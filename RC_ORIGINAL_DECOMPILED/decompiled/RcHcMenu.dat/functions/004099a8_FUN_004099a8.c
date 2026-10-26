/*
 * FUN_004099a8 at 004099a8
 * undefined __register FUN_004099a8(int * param_1, char param_2, int * param_3)
 * Address ranges: 004099a8-00409aa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004099a8(int *param_1,char param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  
  FUN_00403db0(param_3);
  if ((*param_1 != 0) && (param_2 == *(char *)*param_1)) {
    *param_1 = *param_1 + 1;
    iVar4 = 1;
    pbVar5 = (byte *)*param_1;
    pcVar1 = FUN_0040dc34((byte *)*param_1,param_2);
    *param_1 = (int)pcVar1;
    while ((*param_1 != 0 && (*param_1 = *param_1 + 1, param_2 == *(char *)*param_1))) {
      *param_1 = *param_1 + 1;
      iVar4 = iVar4 + 1;
      pcVar1 = FUN_0040dc34((byte *)*param_1,param_2);
      *param_1 = (int)pcVar1;
    }
    if (*param_1 == 0) {
      pcVar1 = FUN_0040a120((char *)pbVar5);
      *param_1 = (int)pcVar1;
    }
    iVar2 = *param_1 - (int)pbVar5;
    if (1 < iVar2) {
      if (iVar4 == 1) {
        FUN_00403e98(param_3,(undefined4 *)pbVar5,iVar2 - 1);
      }
      else {
        FUN_00404364(param_3,iVar2 - iVar4);
        puVar3 = (undefined4 *)FUN_004041f4((undefined *)*param_3);
        pcVar1 = FUN_0040dc34(pbVar5,param_2);
        *param_1 = (int)pcVar1;
        while ((*param_1 != 0 && (*param_1 = *param_1 + 1, param_2 == *(char *)*param_1))) {
          FUN_00402944((undefined4 *)pbVar5,puVar3,*param_1 - (int)pbVar5);
          puVar3 = (undefined4 *)((int)puVar3 + (*param_1 - (int)pbVar5));
          *param_1 = *param_1 + 1;
          pbVar5 = (byte *)*param_1;
          pcVar1 = FUN_0040dc34((byte *)*param_1,param_2);
          *param_1 = (int)pcVar1;
        }
        if (*param_1 == 0) {
          pcVar1 = FUN_0040a120((char *)pbVar5);
          *param_1 = (int)pcVar1;
        }
        FUN_00402944((undefined4 *)pbVar5,puVar3,(*param_1 - (int)pbVar5) - 1);
      }
    }
  }
  return;
}

