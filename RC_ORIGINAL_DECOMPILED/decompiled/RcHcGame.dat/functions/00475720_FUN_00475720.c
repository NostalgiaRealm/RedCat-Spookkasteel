/*
 * FUN_00475720 at 00475720
 * undefined FUN_00475720(void)
 * Address ranges: 00475720-00475905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00475720(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  if (*(int *)(param_1 + 0x14954) != 1) {
    *(undefined1 *)(param_1 + 0x1491c) = 1;
    *(undefined1 *)(param_1 + 0x14994) = 0;
    *(undefined1 *)(param_1 + 0x149a8) = 0;
    *(undefined1 *)(param_1 + 0x149c4) = 0;
    *(undefined4 *)(param_1 + 0x149c8) = 0x41000000;
    FUN_0047e710();
    puVar1 = *(undefined4 **)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x37c) = *puVar1;
    *(undefined4 *)(param_1 + 0x380) = puVar1[1];
    *(undefined4 *)(param_1 + 900) = puVar1[2];
    FUN_004041b0(0);
    uVar2 = __ftol();
    FUN_004041b0(uVar2);
    *(undefined4 *)(param_1 + 0x14878) = 0;
    *(undefined4 *)(param_1 + 0x14954) = 1;
    *(undefined4 *)(param_1 + 0x14880) = 0x3f333333;
    pfVar5 = (float *)(param_1 + 0x674);
    iVar4 = 0xfa;
    do {
      if (*(char *)(pfVar5 + -0x35) != '\0') {
        pfVar5[-0x3a] = 0.0;
        pfVar5[-0x20] = DAT_006b8688;
        iVar3 = __ftol();
        *pfVar5 = (float)iVar3;
        pfVar5[-0x21] = DAT_006b8688;
        FUN_0047e780();
      }
      pfVar5 = pfVar5 + 0x51;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0x147f4) = *(undefined4 *)(param_1 + 0x14980);
    *(undefined4 *)(param_1 + 0x14800) = *(undefined4 *)(param_1 + 0x14818);
    *(undefined1 *)(param_1 + 0x14814) = 1;
    *(undefined4 *)(param_1 + 0x14808) = *(undefined4 *)(param_1 + 0x14970);
    iVar4 = 5;
    *(undefined4 *)(param_1 + 0x1480c) = *(undefined4 *)(param_1 + 0x14974);
    *(undefined4 *)(param_1 + 0x14810) = *(undefined4 *)(param_1 + 0x14978);
    do {
      FUN_0047e710();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar2 = __ftol();
    FUN_004041b0(uVar2);
    if (*(int *)(param_1 + 0x374) != 0) {
      FUN_00502350(1);
      FUN_004e2d60(0);
      uVar2 = __ftol();
      FUN_004e3160(uVar2);
      (**(code **)(**(int **)(param_1 + 0x374) + 0x4c))(*(undefined4 *)(param_1 + 0xf8));
    }
    FUN_004763c0(2,1,0x3ff33333,0x3d99999a);
    FUN_004763c0(0,0,0x3f800000,0x3f000000);
  }
  return;
}

