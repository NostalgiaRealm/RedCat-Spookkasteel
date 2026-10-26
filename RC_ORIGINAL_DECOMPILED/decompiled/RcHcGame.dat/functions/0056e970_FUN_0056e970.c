/*
 * FUN_0056e970 at 0056e970
 * undefined FUN_0056e970(void)
 * Address ranges: 0056e970-0056eb66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0056e970(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640e30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x148) != '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x11c);
  }
  fVar2 = (*(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0x128) +
          (1.0 - *(float *)(param_1 + 0x128)) * *(float *)(param_1 + 0x180)) *
          *(float *)(param_1 + 0x140) * 0.01;
  FUN_00518630();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_2c,s_sprite__s_size__f__>__f_006a4604,puVar4,
                         (double)*(float *)(param_1 + 0x130),(double)fVar2);
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  *(float *)(param_1 + 0x130) = fVar2;
  fVar2 = (*(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x128) +
          (1.0 - *(float *)(param_1 + 0x128)) * *(float *)(param_1 + 0x188)) *
          *(float *)(param_1 + 0x144) * 0.01;
  iVar6 = FUN_00518630();
  iVar3 = *(int *)(iVar6 + 100);
  if (iVar3 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar6 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar4);
    *(int *)(iVar6 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_sprite__s_Alpha__f__>__f_006a45e8,puVar4,
                         (double)*(float *)(param_1 + 0x11c),(double)fVar2);
    local_4 = 1;
    FUN_005aff00(uVar5);
    if (local_18 == 0) {
      *(float *)(param_1 + 0x11c) = fVar2;
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
      *(float *)(param_1 + 0x11c) = fVar2;
      ExceptionList = local_c;
      return;
    }
    *(char *)(local_18 + -1) = cVar1 + -1;
  }
  *(float *)(param_1 + 0x11c) = fVar2;
  ExceptionList = local_c;
  return;
}

