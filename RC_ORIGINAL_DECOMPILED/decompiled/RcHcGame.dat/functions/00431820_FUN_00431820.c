/*
 * FUN_00431820 at 00431820
 * undefined FUN_00431820(void)
 * Address ranges: 00431820-004318bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00431820(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (*(int *)(param_1 + 0x390) != 0) {
      iVar1 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        iVar1 = FUN_004bc480();
      }
      iVar3 = *(int *)(iVar1 + 0x4e8);
      if (iVar3 == -0x80000000) {
        puVar2 = *(undefined1 **)(iVar1 + 0x49c);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar2);
        *(int *)(iVar1 + 0x4e8) = iVar3;
      }
      if (iVar3 == 0) {
        FUN_004e2d60(0x3f800000);
      }
    }
    if (*(int *)(param_1 + 0x330) != 0) {
      FUN_00502350(0);
      *(undefined1 *)(*(int *)(param_1 + 0x330) + 0xa8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x130) = 0x3c23d70a;
    }
  }
  return;
}

