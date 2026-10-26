/*
 * FUN_00475910 at 00475910
 * undefined FUN_00475910(void)
 * Address ranges: 00475910-00475bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00475910(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  if ((*(int *)(param_1 + 0x14954) == 1) && (*(char *)(param_1 + 0x149a8) != '\0')) {
    if (*(char *)(param_1 + 0x14208) == '\0') {
      *(undefined1 *)(param_1 + 0x149c4) = 1;
      *(undefined1 *)(param_1 + 0x149a8) = 0;
      uVar4 = __ftol();
      FUN_004041b0(uVar4);
      FUN_004763c0(1,0,0x3f800000,0);
      fVar1 = 0.5;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x141c0) * 1.8 + (1.0 - *(float *)(param_1 + 0x141c0)) * 0.5;
    }
    puVar5 = (undefined4 *)(param_1 + 0x148);
    iVar6 = 4;
    do {
      puVar5[-1] = 0x437f0000;
      *puVar5 = 0x437f0000;
      puVar5[1] = 0x437f0000;
      puVar5[2] = 0x42c80000;
      puVar5 = puVar5 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    fVar1 = fVar1 * *(float *)(param_1 + 0x14870);
    FUN_00477d50(param_1 + 0x14988,&local_24,&local_18);
    FUN_005b2fa0(fVar1);
    FUN_005b2fa0(fVar1);
    FUN_005b3080();
    FUN_005b3080();
    fVar1 = *(float *)(param_1 + 0x1497c);
    fVar3 = *(float *)(param_1 + 0x14980) + 1.0;
    fVar2 = *(float *)(param_1 + 0x14984);
    *(float *)(param_1 + 0x130) = ((fVar1 + -0.5) - local_24) + local_18;
    *(float *)(param_1 + 0x134) = ((fVar3 + 0.5) - local_20) + local_14;
    *(float *)(param_1 + 0x138) = ((fVar2 + 0.0) - local_1c) + local_10;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(float *)(param_1 + 0x154) = local_18 + 0.5 + local_24 + fVar1;
    *(float *)(param_1 + 0x158) = local_14 + 0.5 + local_20 + fVar3;
    *(float *)(param_1 + 0x15c) = local_10 + 0.0 + local_1c + fVar2;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(float *)(param_1 + 0x178) = (local_24 + 0.5 + fVar1) - local_18;
    *(float *)(param_1 + 0x17c) = (local_20 + -0.5 + fVar3) - local_14;
    *(float *)(param_1 + 0x180) = (local_1c + 0.0 + fVar2) - local_10;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
    *(float *)(param_1 + 0x19c) = ((fVar1 + -0.5) - local_24) - local_18;
    *(float *)(param_1 + 0x1a0) = ((fVar3 + -0.5) - local_20) - local_14;
    *(float *)(param_1 + 0x1a4) = ((fVar2 + 0.0) - local_1c) - local_10;
    *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  }
  return;
}

