/*
 * FUN_0047cdb0 at 0047cdb0
 * undefined FUN_0047cdb0(void)
 * Address ranges: 0047cdb0-0047cf1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047cdb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x4be8) == '\0') {
    *(undefined1 *)(param_1 + 0x4be8) = 1;
    FUN_0047e710();
    puVar1 = *(undefined4 **)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x390) = *puVar1;
    *(undefined4 *)(param_1 + 0x394) = puVar1[1];
    *(undefined4 *)(param_1 + 0x398) = puVar1[2];
    FUN_004041b0(*(undefined4 *)(param_1 + 0x4b14));
    FUN_004041b0(*(undefined4 *)(param_1 + 0x4b18));
    uVar2 = __ftol();
    FUN_004041b0(uVar2);
    *(undefined4 *)(param_1 + 0x4b40) = 0;
    *(undefined4 *)(param_1 + 0x4b48) = 0x3f333333;
    iVar3 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar3 = FUN_004bc480();
    }
    iVar5 = *(int *)(iVar3 + 0x4e8);
    if (iVar5 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x49c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 0x4e8) = iVar5;
    }
    if (iVar5 == 0) {
      iVar3 = 5;
      do {
        FUN_0047ea70(param_1 + 0x4b20,1);
        FUN_0047e710();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (*(int *)(param_1 + 0x374) != 0) {
        FUN_00502350(1);
        FUN_004e2d60(0);
        uVar2 = __ftol();
        FUN_004e3160(uVar2);
        (**(code **)(**(int **)(param_1 + 0x374) + 0x4c))(*(undefined4 *)(param_1 + 0xf8));
      }
      *(undefined1 *)(param_1 + 0x4b54) = 1;
    }
    FUN_0047d2f0(0);
    FUN_0047d570(2);
  }
  return;
}

