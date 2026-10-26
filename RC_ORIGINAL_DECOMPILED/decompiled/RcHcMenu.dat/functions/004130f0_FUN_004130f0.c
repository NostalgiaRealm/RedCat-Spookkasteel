/*
 * FUN_004130f0 at 004130f0
 * undefined __register FUN_004130f0(int * param_1, int * param_2)
 * Address ranges: 004130f0-004131ec;00413202-00413208
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004130f0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x41310d;
  FUN_00403e04(param_2,(undefined4 *)param_1[5]);
  puStack_24 = (undefined1 *)0x413119;
  piVar2 = (int *)FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  if ((*param_2 == 0) && (piVar2 != (int *)0x0)) {
    puStack_24 = (undefined1 *)0x41313c;
    iVar3 = FUN_004032b4(*piVar2);
    if (iVar3 != 0) {
      puStack_24 = (undefined1 *)0x41314e;
      iVar3 = FUN_004032b4(*piVar2);
      puStack_24 = (undefined1 *)0x413153;
      iVar3 = FUN_0040f7bc(iVar3);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 8) != 0)) {
        puStack_24 = (undefined1 *)0x413174;
        puVar4 = (undefined4 *)FUN_004027e8((int)*(short *)(iVar3 + 8) << 2);
        puStack_28 = &LAB_004131ed;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        iVar5 = FUN_004032b4(*piVar2);
        FUN_0040f974(iVar5,puVar4);
        iVar3 = (int)*(short *)(iVar3 + 8);
        if (-1 < iVar3 + -1) {
          iVar5 = 0;
          do {
            puVar1 = (undefined4 *)puVar4[iVar5];
            if (**(char **)*puVar1 == '\a') {
              piVar6 = (int *)FUN_0040f9f8(piVar2,(undefined4 *)puVar4[iVar5]);
              if (piVar6 == param_1) {
                FUN_00403fd4(param_1 + 5,(byte *)((int)puVar1 + 0x1a));
              }
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *in_FS_OFFSET = uStack_2c;
        puStack_24 = &DAT_004131f4;
        puStack_28 = (undefined1 *)0x4131ec;
        FUN_00402800((int)puVar4);
        return;
      }
    }
  }
  return;
}

