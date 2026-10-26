/*
 * FUN_004ed33c at 004ed33c
 * undefined1 __register FUN_004ed33c(undefined4 param_1, int * param_2)
 * Address ranges: 004ed33c-004ed3c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004ed33c(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  
  uVar2 = FUN_0040320c(param_2,(int)&DAT_0047d2b0);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_00403224(param_2,(int)&DAT_0047d2b0);
    iVar4 = FUN_004802d8(iVar3);
    local_18 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      local_18 = thunk_FUN_00402874(local_18);
    }
    if (-1 < (int)local_18) {
      do {
        iVar4 = FUN_004802c4(iVar3,local_18);
        uVar1 = FUN_0047feac(iVar4);
        if (((char)uVar1 == '&') || (*(short *)(iVar4 + 4) == 0x3303)) {
          return 1;
        }
        local_18 = local_18 - 1;
      } while (local_18 != 0xffffffff);
    }
  }
  return 0;
}

