/*
 * FUN_00468730 at 00468730
 * undefined FUN_00468730(void)
 * Address ranges: 00468730-00468949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00468730(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined4 local_58;
  
  iVar12 = *(int *)(param_1 + 0xf8);
  fVar1 = *(float *)(iVar12 + 0x78);
  uVar2 = *(undefined4 *)(iVar12 + 8);
  uVar3 = *(undefined4 *)(iVar12 + 0xc);
  uVar4 = *(undefined4 *)(iVar12 + 0x10);
  uVar5 = *(undefined4 *)(iVar12 + 0x54);
  uVar6 = *(undefined4 *)(iVar12 + 0x58);
  uVar7 = *(undefined4 *)(iVar12 + 8);
  uVar8 = *(undefined4 *)(iVar12 + 0xc);
  uVar9 = *(undefined4 *)(iVar12 + 0x10);
  local_58 = 0xf;
  do {
    fVar10 = *(float *)(*(int *)(param_1 + 0xf8) + 0x40);
    fVar11 = *(float *)(*(int *)(param_1 + 0xf8) + 0x3c);
    iVar12 = FUN_0060a4a0();
    fVar11 = (fVar10 - fVar11) * (float)(iVar12 % 10000) * 0.0001 + fVar11;
    FUN_0047db60(uVar2,uVar3,uVar4,0,0,0,fVar11,0,0,10,1,0,-(fVar1 * 0.75),0,uVar5,uVar6,fVar11,
                 0x3a83126f,0,0x41a00000,0x41a00000,0x41a00000,0,0,0,0x3f800000,0x41200000,
                 0x3f800000,2,uVar7,uVar8,uVar9,0x3fc90fdb,0,0,0);
    local_58 = local_58 + -1;
  } while (local_58 != 0);
  return;
}

