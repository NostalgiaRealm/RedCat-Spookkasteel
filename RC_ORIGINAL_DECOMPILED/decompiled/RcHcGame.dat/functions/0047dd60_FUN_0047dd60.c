/*
 * FUN_0047dd60 at 0047dd60
 * undefined FUN_0047dd60(void)
 * Address ranges: 0047dd60-0047df66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 1 for .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 1 for
   .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0047dd60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (*(char *)(param_1 + 0x1b) != '\0') {
    iVar1 = param_1[7];
    cVar4 = '\x01';
    if (iVar1 != -1) {
      iVar2 = param_1[8];
      if (iVar2 == -1) {
        param_1[9] = 0x3f800000;
        param_1[8] = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        param_1[9] = 0;
        cVar4 = '\0';
      }
      else if (iVar1 < 1) {
        param_1[9] = 0;
      }
      else {
        param_1[9] = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(char *)(param_1 + 10) = cVar4;
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x1b) = 0;
      return;
    }
    cVar4 = '\x01';
    if (*(char *)((int)param_1 + 0x79) == '\0') {
      iVar1 = param_1[0x34];
      if (iVar1 != -1) {
        iVar2 = param_1[0x35];
        if (iVar2 == -1) {
          param_1[0x36] = 0x3f800000;
          param_1[0x35] = iVar1 + param_2;
        }
        else if (iVar2 < param_2) {
          param_1[0x36] = 0;
          cVar4 = '\0';
        }
        else if (iVar1 < 1) {
          param_1[0x36] = 0;
        }
        else {
          param_1[0x36] = (float)(iVar2 - param_2) / (float)iVar1;
        }
      }
      *(char *)(param_1 + 0x37) = cVar4;
      if (cVar4 == '\0') {
        *(undefined1 *)((int)param_1 + 0x79) = 1;
        uVar3 = __ftol();
        FUN_004041b0(uVar3);
      }
    }
    else {
      iVar1 = param_1[0x21];
      if (iVar1 != -1) {
        iVar2 = param_1[0x22];
        if (iVar2 == -1) {
          param_1[0x23] = 0x3f800000;
          param_1[0x22] = iVar1 + param_2;
        }
        else if (iVar2 < param_2) {
          param_1[0x23] = 0;
          cVar4 = '\0';
        }
        else if (iVar1 < 1) {
          param_1[0x23] = 0;
        }
        else {
          param_1[0x23] = (float)(iVar2 - param_2) / (float)iVar1;
        }
      }
      *(char *)(param_1 + 0x24) = cVar4;
      if (cVar4 == '\0') {
        *(undefined1 *)((int)param_1 + 0x79) = 0;
      }
      uVar3 = __ftol();
      param_1[0x1c] = uVar3;
    }
    iVar1 = param_1[0x16];
    if (iVar1 == 0) {
      if (*(char *)((int)param_1 + 0x7a) != '\0') {
        FUN_0047e850(param_3);
        return;
      }
      if (*(char *)(param_1 + 0x3a) != '\0') {
        FUN_0047ece0(param_3);
      }
    }
    else {
      if ((iVar1 != 1) && (iVar1 == 2)) {
        FUN_0047ea90(param_2,param_3);
        return;
      }
      if (*(char *)((int)param_1 + 0x7a) != '\0') {
        (**(code **)*param_1)(param_3);
        return;
      }
    }
  }
  return;
}

