<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<style>
					h1{
					font-weight:bold;
                    color: blue;
                    text-align:center
					}
					p{
					color:purple;
					}
				</style>
			</head>
			<body>
			<h1>
				BMW AG
			</h1>
			<xsl:for-each select="news">
			<xsl:sort select="news" order="ascending"/>
			<p>
			   <xsl:value-of select="information"/>
			</p>
			<p>
			   <xsl:value-of select="statistics"/>
			</p>
			<p>
			   <xsl:value-of select="date"/>
			</p>
		</xsl:for-each>
	</body>
</html>
</xsl:template>
</xsl:stylesheet>
