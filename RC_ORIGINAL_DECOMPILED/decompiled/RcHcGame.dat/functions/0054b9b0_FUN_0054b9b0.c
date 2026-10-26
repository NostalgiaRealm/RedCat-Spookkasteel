/*
 * FUN_0054b9b0 at 0054b9b0
 * undefined FUN_0054b9b0(void)
 * Address ranges: 0054b9b0-0054bc22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0054b9b0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar7 = (int *)(param_3 + 0x14);
  piVar9 = (int *)(param_2 + 0x14);
  do {
    param_2 = param_2 + -0x38;
    param_3 = param_3 + -0x38;
    piVar10 = piVar9 + -0xe;
    piVar8 = piVar7 + -0xe;
    FUN_0040cc00(param_2,0,0xffffffff);
    if (piVar7 + -0xf != piVar9 + -0xf) {
      if (*piVar10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = piVar9[-0xd] - *piVar10 >> 4;
      }
      uVar1 = FUN_00442d80();
      if (uVar1 < uVar6) {
        uVar6 = FUN_0054b970();
        uVar1 = FUN_00442d80();
        if (uVar6 < uVar1) {
          FUN_00548ca0(*piVar8,piVar7[-0xd]);
          FUN_005fe5f0(*piVar8);
          iVar3 = FUN_00442d80();
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          pvVar5 = operator_new(iVar3 << 4);
          *piVar8 = (int)pvVar5;
          iVar3 = FUN_00548cd0(*piVar10,piVar9[-0xd],pvVar5);
          piVar7[-0xd] = iVar3;
          piVar7[-0xc] = iVar3;
          goto LAB_0054bafb;
        }
        iVar3 = *piVar10;
        iVar4 = FUN_00442d80();
        iVar3 = iVar4 * 0x10 + iVar3;
        FUN_0054c340(*piVar10,iVar3,*piVar8);
        FUN_00548cd0(iVar3,piVar9[-0xd],piVar7[-0xd]);
      }
      else {
        uVar2 = FUN_0054c340(*piVar10,piVar9[-0xd],*piVar8);
        FUN_00548ca0(uVar2,piVar7[-0xd]);
      }
      iVar3 = FUN_00442d80();
      piVar7[-0xd] = iVar3 * 0x10 + *piVar8;
    }
LAB_0054bafb:
    if (piVar7 + -0xb != piVar9 + -0xb) {
      iVar3 = piVar9[-10];
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = piVar9[-9] - iVar3 >> 3;
      }
      iVar4 = piVar7[-10];
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = piVar7[-9] - iVar4 >> 3;
      }
      if (uVar1 < uVar6) {
        uVar6 = FUN_0054b990();
        uVar1 = FUN_00548d10();
        if (uVar6 < uVar1) {
          FUN_00587d50(piVar7[-10],piVar7[-9]);
          FUN_005fe5f0(piVar7[-10]);
          iVar3 = FUN_00548d10();
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          pvVar5 = operator_new(iVar3 << 3);
          piVar7[-10] = (int)pvVar5;
          iVar3 = FUN_0054a240(piVar9[-10],piVar9[-9],pvVar5);
          piVar7[-9] = iVar3;
          piVar7[-8] = iVar3;
          goto LAB_0054bbf7;
        }
        iVar3 = piVar9[-10];
        iVar4 = FUN_00548d10();
        iVar3 = iVar3 + iVar4 * 8;
        FUN_0054c4d0(piVar9[-10],iVar3,piVar7[-10]);
        FUN_0054a240(iVar3,piVar9[-9],piVar7[-9]);
      }
      else {
        uVar2 = FUN_0054c4d0(iVar3,piVar9[-9],iVar4);
        FUN_00587d50(uVar2,piVar7[-9]);
      }
      iVar3 = FUN_00548d10();
      piVar7[-9] = piVar7[-10] + iVar3 * 8;
    }
LAB_0054bbf7:
    piVar7[-7] = piVar9[-7];
    piVar7[-6] = piVar9[-6];
    piVar7 = piVar8;
    piVar9 = piVar10;
    if (param_2 == param_1) {
      return param_3;
    }
  } while( true );
}

