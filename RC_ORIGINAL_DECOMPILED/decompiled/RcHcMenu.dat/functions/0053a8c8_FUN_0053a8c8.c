/*
 * FUN_0053a8c8 at 0053a8c8
 * undefined __register FUN_0053a8c8(int * param_1, undefined4 * param_2)
 * Address ranges: 0053a8c8-0053a949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a8c8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00538860(param_1);
  *(undefined4 *)(iVar1 + 0x214) = *param_2;
  *(undefined4 *)(iVar1 + 0x218) = param_2[1];
  if (((*(char *)((int)param_1 + 0x2d3) != '\0') || ((char)param_1[0xb6] == '\x01')) ||
     ((char)param_1[0xb6] == '\x02')) {
    iVar1 = FUN_0053881c(param_1);
    if (*(char *)(iVar1 + 0x60) == '\0') {
      iVar1 = FUN_0053881c(param_1);
      uVar2 = FUN_00538980(param_1,iVar1);
      iVar1 = FUN_00538860(param_1);
      *(undefined4 *)(iVar1 + 0x214) = uVar2;
    }
  }
  return;
}

