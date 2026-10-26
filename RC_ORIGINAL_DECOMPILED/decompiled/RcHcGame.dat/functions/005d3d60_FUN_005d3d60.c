/*
 * FUN_005d3d60 at 005d3d60
 * undefined FUN_005d3d60(void)
 * Address ranges: 005d3d60-005d3ded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3d60(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 local_10;
  
  uVar3 = 0;
  puVar1 = &DAT_007183c0;
  do {
    local_10 = (double)((ulonglong)((uVar3 | 0x7fe000) << 7) << 0x20);
    puVar2 = puVar1 + 1;
    local_10._4_4_ = (uint)((ulonglong)SQRT(local_10) >> 0x20);
    puVar1[-0x2000] = local_10._4_4_ & 0xfffff;
    local_10 = (double)((ulonglong)((uVar3 | 0x800000) << 7) << 0x20);
    local_10._4_4_ = (uint)((ulonglong)SQRT(local_10) >> 0x20);
    uVar3 = uVar3 + 1;
    *puVar1 = local_10._4_4_ & 0xfffff;
    puVar1 = puVar2;
  } while ((int)puVar2 < 0x7203c0);
  return;
}

