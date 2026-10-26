/*
 * FUN_00429150 at 00429150
 * undefined FUN_00429150(void)
 * Address ranges: 00429150-00429346
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 28 for .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64abc0 slot 28 for
   .?AVCRcGuardian@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00429150(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float local_28;
  int local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622e58;
  local_c = ExceptionList;
  local_20 = (float)param_2;
  if (local_20 != 0.0) {
    ExceptionList = &local_c;
    local_24 = param_1;
    piVar3 = (int *)FUN_004237d0(&local_28);
    iVar1 = *piVar3;
    if ((local_28 != 0.0) &&
       (iVar9 = *(int *)((int)local_28 + 0x14) + -1, *(int *)((int)local_28 + 0x14) = iVar9,
       iVar9 == 0)) {
      FUN_005abfc0(0);
    }
    if (iVar1 != 0) {
      FUN_004282e0();
      uVar4 = FUN_00595d60();
      fVar12 = (float10)FUN_005b15f0(uVar4);
      local_28 = (float)fVar12;
      fVar13 = *(float *)(param_1 + 0x160) - local_28;
      fVar12 = (float10)FUN_005b1630(fVar13);
      uVar6 = 0xffffffff;
      if (param_2 == -1) {
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        local_1c[0] = 0xff;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar11 = local_18;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)local_18 + uVar6) = 0;
          param_1 = local_24;
          local_14 = uVar6;
        }
        local_4 = 0;
        pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1c);
        (*pcVar5)();
        local_4 = 0xffffffff;
        if (local_18 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)local_18 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)local_18 + -1));
          }
          else {
            *(char *)((int)local_18 + -1) = cVar2 + -1;
          }
        }
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
      }
      fVar14 = local_20 * *(float *)(param_1 + 0x148) * 0.001;
      if (fVar14 <= ABS((float)fVar12)) {
        if ((float)fVar12 < 0.0) {
          fVar14 = -fVar14;
        }
        fVar12 = (float10)FUN_005b1630(fVar14);
      }
      else {
        fVar12 = (float10)fVar13;
      }
      uVar4 = 0;
      fVar13 = (float)(fVar12 + (float10)local_28);
      FUN_004282e0(fVar13,0);
      FUN_00595ec0(fVar13,uVar4);
    }
  }
  ExceptionList = local_c;
  return;
}

