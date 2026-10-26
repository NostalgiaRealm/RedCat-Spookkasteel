/*
 * FUN_004023b0 at 004023b0
 * undefined4 __register FUN_004023b0(int param_1)
 * Address ranges: 004023b0-00402541;00402549-00402551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004023b0(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_00573434 = 0;
  if ((DAT_00573430 == '\0') && (cVar2 = FUN_00401b54(), cVar2 == '\0')) {
    DAT_00573434 = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00573049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_00573434 = 9;
    goto LAB_00402519;
  }
  _DAT_00573424 = _DAT_00573424 + -1;
  _DAT_00573428 = _DAT_00573428 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_00573434 = 10;
      goto LAB_00402519;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_00573434 = 10;
      goto LAB_00402519;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401cf8((int *)puVar6);
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_0057348c) {
    DAT_0057348c = (uint *)((int)DAT_0057348c - uVar5);
    DAT_00573488 = DAT_00573488 + uVar5;
    if (0x3c00 < DAT_00573488) {
      FUN_00401fd0();
    }
    FUN_004038cc();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_00573434 = 0xb;
      goto LAB_00402519;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401cf8((int *)puVar3);
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_00573434 = 0xb;
      goto LAB_00402519;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401f48(puVar6,uVar5);
LAB_00402519:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_00573049 != '\0') {
    uStack_20 = 0x402541;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573438);
  }
  return uVar4;
}

