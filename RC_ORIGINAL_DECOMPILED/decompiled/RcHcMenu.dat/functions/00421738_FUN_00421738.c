/*
 * FUN_00421738 at 00421738
 * undefined __register FUN_00421738(int * param_1)
 * Address ranges: 00421738-00421794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421738(int *param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if ((*(char *)((int)param_1 + 0x2a) == '\0') || (*(char *)((int)param_1 + 0x29) == '\0')) {
    iVar1 = param_1[8];
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00420214(*(int *)(iVar1 + 0xc));
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_00421638((int)param_1);
    FUN_00421648((int)param_1);
    uVar2 = FUN_00421574(param_1);
    BVar3 = FUN_00420d18(*(HPALETTE *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),uVar2);
    *(BOOL *)(iVar1 + 0xc) = BVar3;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  return;
}

