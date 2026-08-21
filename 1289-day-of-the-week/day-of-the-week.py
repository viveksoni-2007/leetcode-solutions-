class Solution(object):
    def dayOfTheWeek(self, day, month, year):
        import datetime
        x = datetime.datetime(year, month, day)
        return x.strftime("%A")
        """
        :type day: int
        :type month: int
        :type year: int
        :rtype: str
        """
        