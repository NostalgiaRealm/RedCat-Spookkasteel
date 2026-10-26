/*
 * FUN_0060d897 at 0060d897
 * undefined FUN_0060d897(void)
 * Address ranges: 0060d897-0060d9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060d897(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_0070ff64;
    pcVar6 = DAT_0070ff64;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    iVar4 = FUN_0060d9c4(param_1);
    pcVar6 = *(code **)(iVar4 + 8);
    puVar3 = (undefined4 *)(iVar4 + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_0070ff70;
    pcVar6 = DAT_0070ff70;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_0070ff68;
    pcVar6 = DAT_0070ff68;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_0070ff6c;
    pcVar6 = DAT_0070ff6c;
  }
  iVar1 = DAT_007101f0;
  iVar4 = DAT_006b3adc;
  if (pcVar6 == (code *)0x1) {
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar5 = param_1, param_1 == 4)) {
    DAT_007101f0 = 0;
    iVar5 = iVar1;
    if (param_1 == 8) {
      DAT_006b3adc = 0x8c;
      param_1 = iVar4;
      goto LAB_0060d95b;
    }
LAB_0060d987:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar6)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_0060d9aa;
    }
  }
  else {
LAB_0060d95b:
    if (iVar2 != 8) goto LAB_0060d987;
    if (DAT_006b3ad0 < DAT_006b3ad4 + DAT_006b3ad0) {
      iVar4 = (DAT_006b3ad4 + DAT_006b3ad0) - DAT_006b3ad0;
      puVar3 = (undefined4 *)(DAT_006b3ad0 * 0xc + 0x6b3a60);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  (*pcVar6)(8,DAT_006b3adc);
LAB_0060d9aa:
  if (iVar2 == 8) {
    DAT_006b3adc = param_1;
  }
  DAT_007101f0 = iVar5;
  return 0;
}

