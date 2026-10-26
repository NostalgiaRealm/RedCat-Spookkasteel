/*
 * FUN_004775b0 at 004775b0
 * undefined FUN_004775b0(void)
 * Address ranges: 004775b0-004777aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004775b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_64;
  undefined4 local_60;
  
  uVar4 = DAT_006b873c;
  uVar1 = *(undefined4 *)(param_1 + 0x14b0);
  uVar2 = *(undefined4 *)(param_1 + 0x14b4);
  uVar3 = *(undefined4 *)(param_1 + 0x14b8);
  local_64 = 0.0;
  local_60 = 0xf;
  do {
    FUN_0047db60(uVar1,uVar2,uVar3,0,0,0,0x3f800000,0,0,0,2,0,0x3d4ccccd,0,0x42480000,0,0x3f800000,
                 0x3dcccccd,0,0x41a00000,0x41a00000,0x41a00000,0,0,uVar4,0,0,0x41480000,1,0,0,0,0,0,
                 0,local_64);
    local_64 = local_64 + 0.41887903;
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  return;
}

