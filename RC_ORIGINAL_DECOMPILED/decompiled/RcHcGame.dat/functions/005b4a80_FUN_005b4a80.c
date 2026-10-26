/*
 * FUN_005b4a80 at 005b4a80
 * undefined FUN_005b4a80(void)
 * Address ranges: 005b4a80-005b4b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b4a80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_38;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_005b2e20(0x50061c46,0x50061c46,0x50061c46);
  FUN_005b2e20(0xd0061c46,0xd0061c46,0xd0061c46);
  iVar3 = 0;
  local_38 = 0;
  iVar1 = FUN_005b7140();
  if (0 < iVar1) {
    do {
      iVar2 = FUN_005b4730(local_c,local_18,local_24,local_30);
      if (iVar2 != 0) {
        FUN_005b4b40(local_c,local_18,local_24,local_30);
        local_38 = local_38 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    if (0 < local_38) {
      return 1;
    }
  }
  return 0;
}

