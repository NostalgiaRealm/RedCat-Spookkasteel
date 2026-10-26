/*
 * FUN_0040dc74 at 0040dc74
 * undefined __register FUN_0040dc74(void)
 * Address ranges: 0040dc74-0040dd29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040dc74(void)

{
  LCID LVar1;
  int iVar2;
  char cVar3;
  byte local_28;
  _cpinfo local_24;
  
  DAT_005735b4 = 0x409;
  DAT_005735b8 = 9;
  DAT_005735ba = 1;
  LVar1 = GetThreadLocale();
  if (LVar1 != 0) {
    DAT_005735b4 = LVar1;
  }
  if ((ushort)LVar1 != 0) {
    DAT_005735b8 = (ushort)LVar1 & 0x3ff;
    DAT_005735ba = (undefined2)((LVar1 & 0xffff) >> 10);
  }
  iVar2 = GetSystemMetrics(0x4a);
  DAT_005735bd = iVar2 != 0;
  iVar2 = GetSystemMetrics(0x2a);
  DAT_005735bc = iVar2 != 0;
  if ((bool)DAT_005735bc) {
    GetCPInfo(0,&local_24);
    for (iVar2 = 0;
        (iVar2 < 0xc && (local_24.LeadByte[iVar2] != '\0' || local_24.LeadByte[iVar2 + 1] != '\0'));
        iVar2 = iVar2 + 2) {
      local_28 = local_24.LeadByte[iVar2];
      if (local_28 <= local_24.LeadByte[iVar2 + 1]) {
        cVar3 = (local_24.LeadByte[iVar2 + 1] - local_28) + '\x01';
        do {
          (&DAT_0056f16c)[(int)(uint)local_28 >> 3] =
               (&DAT_0056f16c)[(int)(uint)local_28 >> 3] | '\x01' << (local_28 & 7);
          local_28 = local_28 + 1;
          cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
      }
    }
  }
  return;
}

