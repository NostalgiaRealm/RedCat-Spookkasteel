/*
 * FUN_005c3e10 at 005c3e10
 * undefined FUN_005c3e10(void)
 * Address ranges: 005c3e10-005c3f84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c3e10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (puVar6 == (uint *)0x0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xd37,
                   &DAT_006b3f70,0);
      return 1;
    }
    iVar5 = FUN_005c6a40();
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 4);
    iVar7 = *(int *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 0x20);
    switch(*(undefined4 *)(iVar5 + 0x30)) {
    case 0:
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xd4a,
                   &DAT_006b3f70,0);
      return 1;
    case 1:
      if (iVar7 != 0) {
        do {
          iVar7 = iVar7 + -1;
          iVar5 = iVar2;
          while (iVar5 != 0) {
            iVar5 = iVar5 + -1;
            uVar4 = *puVar6;
            puVar6 = (uint *)((int)puVar6 + 1);
            if ((byte)uVar4 == uVar3) {
              return 1;
            }
          }
          puVar6 = (uint *)((int)puVar6 + (iVar1 - iVar2));
        } while (iVar7 != 0);
        return 0;
      }
      break;
    case 2:
      if (iVar7 != 0) {
        do {
          iVar7 = iVar7 + -1;
          iVar5 = iVar2;
          while (iVar5 != 0) {
            iVar5 = iVar5 + -1;
            uVar4 = *puVar6;
            puVar6 = (uint *)((int)puVar6 + 2);
            if ((ushort)uVar4 == uVar3) {
              return 1;
            }
          }
          puVar6 = (uint *)((int)puVar6 + (iVar1 - iVar2) * 2);
        } while (iVar7 != 0);
        return 0;
      }
      break;
    case 3:
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xd4e,
                   &DAT_006b3f70,0);
      return 1;
    case 4:
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        iVar5 = iVar2;
        while (iVar5 != 0) {
          iVar5 = iVar5 + -1;
          uVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          if (uVar4 == uVar3) {
            return 1;
          }
        }
        puVar6 = puVar6 + (iVar1 - iVar2);
      }
    }
  }
  return 0;
}

