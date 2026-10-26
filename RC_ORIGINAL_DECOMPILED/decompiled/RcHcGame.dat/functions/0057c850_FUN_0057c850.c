/*
 * FUN_0057c850 at 0057c850
 * undefined FUN_0057c850(void)
 * Address ranges: 0057c850-0057c958
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057c850(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar1 = *(char *)(param_1 + 0x104);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(char *)(iVar3 + 0x67d) != cVar1) {
      *(undefined1 *)(iVar3 + 0x67c) = 1;
      *(char *)(iVar3 + 0x67d) = cVar1;
    }
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    *(undefined1 *)(iVar3 + 0x67c) = 1;
    *(undefined4 *)(iVar3 + 0x680) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(iVar3 + 0x684) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined4 *)(iVar3 + 0x688) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(iVar3 + 0x68c) = *(undefined4 *)(param_1 + 0x114);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(float *)(iVar3 + 0x690) != *(float *)(param_1 + 0x118)) {
      *(undefined1 *)(iVar3 + 0x67c) = 1;
      *(undefined4 *)(iVar3 + 0x690) = *(undefined4 *)(param_1 + 0x118);
    }
    fVar2 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x11c);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(float *)(iVar3 + 0x694) != fVar2) {
      *(undefined1 *)(iVar3 + 0x67c) = 1;
      *(float *)(iVar3 + 0x694) = fVar2;
    }
  }
  return;
}

