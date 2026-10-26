/*
 * FUN_004c6d34 at 004c6d34
 * undefined __register FUN_004c6d34(uint param_1, uint param_2)
 * Address ranges: 004c6d34-004c6d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c6d34(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_004129b8(*(int *)(param_1 + 0x78),param_2);
  if ((char)uVar3 != '\0') {
    piVar1 = (int *)(param_1 + 0x7c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402874(param_1);
    }
    FUN_0041298c(*(int *)(param_1 + 0x78),param_2,'\0');
  }
  return;
}

