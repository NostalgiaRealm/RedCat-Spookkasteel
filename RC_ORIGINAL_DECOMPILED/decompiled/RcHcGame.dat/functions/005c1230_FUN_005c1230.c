/*
 * FUN_005c1230 at 005c1230
 * undefined FUN_005c1230(void)
 * Address ranges: 005c1230-005c134c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005c1230(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa8) != 0)) &&
      (*(int *)(param_1 + 0xb0) == 0)) &&
     ((*(int *)(param_1 + 0x90) <= param_2 && (param_2 <= *(int *)(param_1 + 0x94))))) {
    puVar1 = (undefined4 *)FUN_005c0e50(param_1,param_3,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0x2c] = param_2;
      puVar1[0x2b] = *(undefined4 *)(param_1 + 0xac);
      puVar1[0x1d] = param_1;
      FUN_005c01c0();
      puVar1[0x28] = *(undefined4 *)(param_1 + 0xa0);
      iVar2 = FUN_005c3390(puVar1,param_2,puVar1 + 0x20);
      if (iVar2 != 0) {
        puVar3 = puVar1 + 0x20;
        puVar4 = puVar1;
        for (iVar2 = 9; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
        }
        if (puVar1[0x28] != 0) {
          FUN_005c4b80();
        }
        if (puVar1[9] != 0) {
          FUN_005c4b80();
        }
        return puVar1;
      }
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x426,
                   &DAT_006b3f70,0);
      FUN_005c02b0();
    }
  }
  return (undefined4 *)0x0;
}

