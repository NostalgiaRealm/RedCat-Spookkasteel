/*
 * FUN_0048415c at 0048415c
 * uint __register FUN_0048415c(undefined4 param_1, int param_2)
 * Address ranges: 0048415c-0048426c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0048415c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  undefined1 auStack_20 [2];
  undefined2 auStack_1e [7];
  
  uVar2 = FUN_004687b0(param_2);
  if (-1 < (int)(uVar2 - 1)) {
    iVar6 = 0;
    uVar7 = uVar2;
    do {
      piVar3 = (int *)FUN_00468730(param_2,iVar6);
      uVar2 = FUN_0040320c(piVar3,(int)&PTR_FUN_00464fe0);
      if ((char)uVar2 != '\0') {
        piVar3 = (int *)FUN_00468730(param_2,iVar6);
        auStack_1e[0] = (**(code **)(*piVar3 + 0x74))();
        puStack_28 = auStack_20;
        uStack_2c = 0x22;
        puStack_30 = auStack_1e;
        iVar1 = *(int *)(iStack_24 + 0x168);
        uVar4 = thunk_FUN_00479000(iVar1);
        if ((short)uVar4 == 0) {
          uVar4 = FUN_00403fe0(piVar3 + 0x36,(char *)&puStack_30,0x20);
        }
        uVar2 = CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar3[0xd] + -0x1c);
        if ((byte)((char)piVar3[0xd] - 0x1aU) < 2) {
          if (((char)piVar3[0xd] == '\x1b') && (*(char *)(iVar1 + 0x9a) != '\0')) {
            iVar5 = (**(code **)(*piVar3 + 0xd0))();
            iVar5 = FUN_00468730(iVar5,0);
            if (*(char *)(iVar5 + 0x34) == '\x1a') {
              iVar5 = (**(code **)(*piVar3 + 0xd0))();
              piVar3 = (int *)FUN_00468730(iVar5,0);
              iVar5 = (**(code **)(*piVar3 + 0xd0))();
              uVar2 = FUN_0048415c(iVar1,iVar5);
              goto LAB_0048425d;
            }
          }
          iVar5 = (**(code **)(*piVar3 + 0xd0))();
          uVar2 = FUN_0048415c(iVar1,iVar5);
        }
      }
LAB_0048425d:
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return uVar2;
}

