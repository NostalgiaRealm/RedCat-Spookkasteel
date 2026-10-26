/*
 * FUN_00492408 at 00492408
 * undefined __register FUN_00492408(int * param_1, byte * param_2)
 * Address ranges: 00492408-0049243d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492408(int *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049216c(param_1);
  uVar2 = iVar1 + 0x8000;
  if (0xffff < uVar2) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  FUN_0048d0d4((short)uVar2 + -0x8000,param_2);
  return;
}

