/*
 * FUN_005b60f0 at 005b60f0
 * undefined FUN_005b60f0(void)
 * Address ranges: 005b60f0-005b61f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b60f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_c [8];
  undefined4 local_4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    piVar4 = &DAT_006cb3f4;
    do {
      *(int *)(param_1 + 0x336a8) = *(int *)(param_1 + 0x336a8) + 1;
      if (((*(byte *)(param_2 + 0xa8) & 8) == 0) || (0x6cc3f3 < (int)piVar4)) {
        iVar2 = FUN_005b7e20(0x20);
        if (iVar2 != 0) {
          FUN_005b6320(DAT_006cb3ec,param_2);
        }
      }
      else {
        FUN_005c9410(local_c);
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_2 + 0x98) = local_4;
        *piVar4 = param_2;
        piVar4 = piVar4 + 1;
        *(int *)(param_1 + 0x336ac) = *(int *)(param_1 + 0x336ac) + 1;
      }
      param_2 = *(int *)(param_2 + 0xb4);
    } while (param_2 != 0);
    if (iVar3 != 0) {
      FUN_0060dd9b(&DAT_006cb3f4,iVar3,4,&LAB_005b6200);
      if (0 < iVar3) {
        puVar5 = &DAT_006cb3f4;
        do {
          uVar1 = *puVar5;
          iVar2 = FUN_005b7e20(0x20);
          if (iVar2 != 0) {
            FUN_005b6320(DAT_006cb3ec,uVar1);
          }
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return 1;
}

