/*
 * FUN_004215c4 at 004215c4
 * undefined __register FUN_004215c4(int param_1)
 * Address ranges: 004215c4-00421636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004215c4(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    FUN_00421798(param_1);
    if (*(int *)(iVar1 + 0x30) == 0) {
      GetObjectA(*(HANDLE *)(iVar1 + 8),0x54,(LPVOID)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x30) = 0x28;
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined2 *)(iVar1 + 0x3c) = 1;
      *(short *)(iVar1 + 0x3e) = *(short *)(iVar1 + 0x28) * *(short *)(iVar1 + 0x2a);
    }
    pHVar2 = FUN_00420658(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                          *(HPALETTE *)(iVar1 + 0x10),0,iVar1 + 0x18);
    *(HPALETTE *)(iVar1 + 0x14) = pHVar2;
  }
  return;
}

