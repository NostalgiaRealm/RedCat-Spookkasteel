/*
 * FUN_0061bab0 at 0061bab0
 * undefined FUN_0061bab0(void)
 * Address ranges: 0061bab0-0061bbf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG FUN_0061bab0(undefined4 param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = (int *)FUN_0061bbf1(param_1);
  uVar3 = DAT_007101f0;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_007101f0 = param_2;
      if (piVar4[1] == 8) {
        if (DAT_006b3ad0 < DAT_006b3ad4 + DAT_006b3ad0) {
          iVar6 = (DAT_006b3ad4 + DAT_006b3ad0) - DAT_006b3ad0;
          puVar7 = (undefined4 *)(DAT_006b3ad0 * 0xc + 0x6b3a60);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_006b3adc;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_006b3adc = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_006b3adc = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_006b3adc = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_006b3adc = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_006b3adc = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_006b3adc = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_006b3adc = 0x8a;
        }
        (*pcVar1)(8,DAT_006b3adc);
        DAT_006b3adc = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_007101f0 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}

