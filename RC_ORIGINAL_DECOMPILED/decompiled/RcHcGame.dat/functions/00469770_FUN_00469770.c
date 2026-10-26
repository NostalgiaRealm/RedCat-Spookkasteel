/*
 * FUN_00469770 at 00469770
 * undefined FUN_00469770(void)
 * Address ranges: 00469770-0046997d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00469770(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar8 = DAT_006b85d4;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  uVar4 = *(undefined4 *)(param_1 + 0x11c);
  uVar5 = *(undefined4 *)(param_1 + 0x110);
  uVar6 = *(undefined4 *)(param_1 + 0x114);
  uVar7 = *(undefined4 *)(param_1 + 0x118);
  local_68 = 0.0;
  local_64 = 5;
  do {
    FUN_0047db60(uVar1,uVar2,uVar3,0,0,0,0x3f800000,0,0,0,2,0,0,0,0x42c80000,0x41200000,0x3f8ccccd,
                 0x3dcccccd,0,0x41a00000,0x41a00000,0x41a00000,0,0,uVar8,uVar4,0,0x41480000,1,uVar5,
                 uVar6,uVar7,0,0,0,local_68);
    local_68 = local_68 + 1.2566371;
    local_64 = local_64 + -1;
  } while (local_64 != 0);
  return;
}

