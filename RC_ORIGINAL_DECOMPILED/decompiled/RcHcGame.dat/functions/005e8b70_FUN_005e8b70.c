/*
 * FUN_005e8b70 at 005e8b70
 * undefined FUN_005e8b70(void)
 * Address ranges: 005e8b70-005e8be5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e8b70(undefined4 *param_1,undefined4 param_2,int *param_3,byte param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  do {
    if (param_5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_005e8bcc:
      uVar3 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar3,1);
    }
    else {
      uVar3 = *(uint *)param_3[8];
      if (uVar3 == 0) {
LAB_005e8bb7:
        uVar3 = (**(code **)(*param_3 + 4))(param_4);
      }
      else {
        iVar1 = *(int *)param_3[0xc];
        if (iVar1 + uVar3 <= uVar3) goto LAB_005e8bb7;
        *(int *)param_3[0xc] = iVar1 + -1;
        pbVar2 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar2 + 1;
        *pbVar2 = param_4;
        uVar3 = (uint)param_4;
      }
      if (uVar3 == 0xffffffff) goto LAB_005e8bcc;
    }
    param_5 = param_5 + -1;
  } while( true );
}

